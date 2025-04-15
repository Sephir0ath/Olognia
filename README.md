# Larga vida a Olognia!
---
## ⭐Enunciado del problema ⭐ (Proyecto 1 de la asignatura Estructura de Datos)
En el pintoresco pueblo de Olognia habitan talentosos ingenieros informáticos, los cuales han estado desarrollando el Programa Experimental de Poder Extremo (PEPE por sus iniciales). Sin embargo por un error de programación, ¡PEPE se ha salido de control y está apunto de atacar al pueblo!

PEPE tiene la capacidad de generar esbirros los cuales tienen puntos de vida y de ataque variables (no todos los esbirros fueron creados iguales) los cuales atacarán la ciudad de manera secuencial, uno a la vez y en el mismo orden en el que fueron creados. Además, PEPE es capaz de crear Clones Avanzados de Naturaleza Orgánica (CANO por sus iniciales), los cuales al ser atacados una cierta cantidad de veces, son capaces de dividirse una única vez en dos partes iguales, donde cada parte tendrá los puntos de vida y ataque disminuidos en uno respecto a los que tenía antes de ser dividido. Note que estos esbirros resultantes de la división serán los siguientes en atacar el pueblo y se cuentan como esbirros independientes.

Los habitantes de Olognia si bien son muy inteligentes, no se caracterizan por su valentía, por la cual han puesto a cargo de la defensa de la ciudad a un mechón de informática, quien está dispuesto a dar su vida si fuese necesario a cambio de certámenes pasados de Cálculo I.

Nuestro héroe tiene V puntos de vida y está equipado con la última tecnología armamentística desarrollada en Olognia: arco, flechas y un modelo de machine learning que mejora el ataque de las flechas. El arco empieza con 2 puntos de ataque, mientras que el modelo de machine learning incrementa en 1 estos puntos después de 5 esbirros eliminados por el arma.

Los ingenieros más ilustres de Olognia han sido capaces de descifrar la cantidad y el orden en el cual atacarán los esbirros. Por cada cada esbirro sabemos su vida, ataque y si es o no un CANO. Ahora quieren simular el ataque y saber si es que el mechón será capaz de salvar al pueblo. ¡Pero! Cuando intentaron simularlo se dieron cuenta que olvidaron todo lo que aprendieron en el curso de estructuras de datos, y sin esos conocimientos fundamentales nunca serán capaces de saber el resultado de la batalla de antemano.

Es por esto que las autoridades han decidido contactarles a ustedes, estudiantes del curso de estructuras de datos, para conocer el destino final de Olognia. Como regla general, la simulación termina cuando la vida del mechón o la cantidad de esbirros restantes llega a 0.

¡Qué viva Olognia y toda su gente!

Entrada
Se proporcionarán las siguientes 4 líneas de datos, las cuales deberán ser leídas desde teclado:

La primera línea consta de un número v, el cual corresponde a la vida del héroe mechón.
La segunda línea consta de un número n, el cual corresponde al número total de esbirros generados por PEPE.
La tercera línea consta de n números separados por espacios, indicando la vida de los esbirros, en el mismo orden en el que atacarán la ciudad.
La cuarta línea consta de n números separados por espacios, indicando el ataque de cada esbirro, en el mismo orden en el que atacarán la ciudad.
La quinta línea consta de n valores binarios separados por espacios, indicando con un 1 si el i-ésimo esbirro es un CANO o 0 en caso contrario. Para efectos del trabajo, asumiremos que todos los CANO se dividirán luego del segundo ataque recibido.
Salida
Tu deber será imprimir un valor numérico y un texto separados por un salto de línea. El valor numérico corresponde al daño total que el mechón causó a los esbirros, mientras que el texto será "EZ pizi" si el mechón logra salvar al pueblo o "RIP mechón" si es que este no logra su cometido.

Ejemplo para la siguiente entrada:
* 25
* 7
* 2 3 2 9 2 3 2
* 1 2 1 3 1 2 1
* 0 0 0 1 0 0 0

la respuesta debería ser:
- 26 EZ pizi


## Contribuyentes (Grupo número 15) ✨ 
---
* [Juan Felipe Raysz Muñoz](https://github.com/Sephir0ath)
* [Manuel Isaac Núñez Larenas](https://github.com/sshiro0)
