document.addEventListener('DOMContentLoaded', function () {
    const tareaInput = document.getElementById('tareaInput');
    const agregarButton = document.getElementById('agregar');
    const listaTareas = document.getElementById('listaTareas');

    agregarButton.addEventListener('click', function () {
        const tareaTexto = tareaInput.value.trim();

        if (tareaTexto === '') {
            alert('Por favor, ingrese una tarea válida.');
            return;
        }

        const nuevaTarea = document.createElement('div');
        nuevaTarea.classList.add('task');
        nuevaTarea.classList.add('card')
        nuevaTarea.textContent = tareaTexto;

        nuevaTarea.addEventListener('click', function () {
            nuevaTarea.classList.toggle('completed');
        });

        nuevaTarea.addEventListener('contextmenu', function (event) {
            event.preventDefault();
            nuevaTarea.remove();
        });

        listaTareas.appendChild(nuevaTarea);
        tareaInput.value = '';
    });
});
