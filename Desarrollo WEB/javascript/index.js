
function prueba() {
    alert("Soy una alerta");
    console.log("Soy un mensaje en la consola");
};

function obtenerNombre(){
    const nombre = document.getElementById("nombre").value;
    localStorage.setItem("nombre", nombre);
    console.log('Nombre ingresado: ', nombre);
}

function compararNombre(){
    const nombre = document.getElementById("nombre").value;
    localStorage.setItem("nombre", nombre);
    if (nombre == "Prueba") {
        console.log("El nombre coincide");
        //console.log('Nombre ingresado: ', nombre);
    }else{
        console.log('El nombre no coincide');
    }
}

function obtenerNombreGuardado() {
    const nombreobtenido = localStorage.getItem("nombre");
    const h1Nombre = document.getElementById("nombreGuardado"); // Obtener la etiqueta h1

    if (nombreobtenido != null) {
        console.log("El local storage tiene un valor: ", nombreobtenido);
        h1Nombre.textContent = "Nombre almacenado: " + nombreobtenido; // Establecer el contenido de h1
    } else {
        console.log("El local storage no tiene un valor");
        h1Nombre.textContent = "No hay nombre almacenado"; // Establecer un mensaje en h1
    }
}

