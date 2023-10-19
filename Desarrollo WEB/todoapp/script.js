document.addEventListener("DOMContentLoaded", function () {
    const tareaInput = document.getElementById("tareaInput");
    const agregarButton = document.getElementById("agregar");
    const listaTareas = document.getElementById("listaTareas");

    // Obtener tareas almacenadas en localStorage (si hay alguna)
    const tareasGuardadas = JSON.parse(localStorage.getItem("tareas")) || [];

    // Función para guardar las tareas en localStorage
    function guardarTareas(id, estado) {
        // Guardar las tareas en localStorage con la hora actual como clave
        const horaActual = new Date().toLocaleTimeString();
        console.log(horaActual);
        const json = {
            hora: horaActual,
            tarea: id,
            estado: estado,
        };
        // Si la tarea ya está guardada, actualizarla
        for (const tarea of tareasGuardadas) {
            if (tarea.tarea === id) {
                tarea.estado = estado;
                localStorage.setItem("tareas", JSON.stringify(tareasGuardadas));
                return;
            }
        }
        tareasGuardadas.push(json);
        localStorage.setItem("tareas", JSON.stringify(tareasGuardadas));
    }

    // Función para crear una nueva tarea
    function crearTarea(tareaTexto) {
        const nuevaTarea = document.createElement("div");
        nuevaTarea.classList.add("task");
        nuevaTarea.classList.add("card");
        nuevaTarea.id = tareaTexto;
        nuevaTarea.textContent = tareaTexto;

        //guardarTareas(tareaTexto, nuevaTarea.classList.contains('completed'));

        // Verificar si la tarea está completada
        if (tareasGuardadas.includes(tareaTexto)) {
            nuevaTarea.classList.add("completed");
        }

        nuevaTarea.addEventListener("click", function () {
            nuevaTarea.classList.toggle("completed");

            // Guardar las tareas actualizadas en localStorage
            guardarTareas(tareaTexto, true);
        });

        nuevaTarea.addEventListener("contextmenu", function (event) {
            event.preventDefault();
            nuevaTarea.remove();
            alert("Tarea eliminada.");
            // Eliminar la tarea del array de tareas guardadas
            tareasGuardadas.splice(tareasGuardadas.indexOf(tareaTexto), 1);
            // Guardar las tareas actualizadas en localStorage
            localStorage.setItem("tareas", JSON.stringify(tareasGuardadas));
        });

        listaTareas.appendChild(nuevaTarea);
    }

    // Agregar las tareas almacenadas en localStorage al cargar la página
    for (const tarea of tareasGuardadas) {
        // Verificar si la tarea ya se creó
        if (document.getElementById(tarea.tarea)) {
            continue;
        }
        // Verificar si la tarea está completada
        if (tarea.estado) {
            crearTarea(tarea.tarea);
            const nuevaTarea = document.getElementById(tarea.tarea);
            nuevaTarea.classList.add("completed");
        } else {
            crearTarea(tarea.tarea);
        }
    }

    agregarButton.addEventListener("click", function () {
        const tareaTexto = tareaInput.value.trim();

        if (tareaTexto === "") {
            alert("Por favor, ingrese una tarea válida.");
            return;
        }

        // Verificar si la tarea ya se creó
        if (document.getElementById(tareaTexto)) {
            alert("La tarea ya existe.");
            return;
        }

        crearTarea(tareaTexto);
        const nuevaTarea = document.getElementById(tareaTexto);
        guardarTareas(tareaTexto, nuevaTarea.classList.contains("completed"));

        tareaInput.value = "";
    });
});
