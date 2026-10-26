# OCP
Ejemplo de principio de abierto/cerrado en c++
1. ¿Qué es?
Este principio SOLID nos dice que las clases deben estar abiertas para poder hacer cambios con el comportamiento pero deben estar cerradas para que no se pueda modificar todo el codigo que ya existe.
Asi no se rompe lo que ya sirve.
3. Implementación en este pequeño proyecto.
Se crearon tres clases para los descuentos y una mas para la calculadora. La primera clase de Descuento se hace con un virtual para que sus clases hijas se comporten diferente, porque cada descuento va
para diferente públicos. Así funciona mejor para no tener que modificar toda la clase de la calculadora y no hacer muchos if.
