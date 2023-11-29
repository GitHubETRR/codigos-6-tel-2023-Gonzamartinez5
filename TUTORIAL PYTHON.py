# hastag es comentario de 1 linea

"""""
Estas comillas son comentario de varias lineas
ncoi
fnasjav
vbakj
"""""

# las variables no tienen tipo, son de tipo dinamico
variable = 45
variable = 3.5
variable = "vojdisd"

# para guardar texto podes usar "" o ''

apellido = 'Martinez'

# usar una variable en un sting
edad = 18
descr = f'El tiene {edad} años'
# -> quedaria descr = 'El tiene 18 años'

# print es para imprimir
nombre = input("Tu nombre: ")
print("Hola")

if nombre == "Gonzalo":
    print("El nombre es gonzalo")
elif nombre == "Gonza": #elif es else if
    print("El nombre es Gonza")
else:
    print('No sos facha')

#input devuelve un string, hay q convertirlo a numero si queres operarlo
num1 = input("numero1: ") # num1 = "18" si a "18" le suma 1 da error
num1 = int(num1)

num2 = int(input("numero2: "))
print('El resultado es: ', num1 + num2)

# resultado = num1 + num2
#print(resultado)

# suma = num1 + num2
resta = num1 - num2
mult = num1 * num2
div = num1 / num2

#  +	Realiza Adición entre los operandos12 + 3 = 15
#  -	Realiza Substracción entre los operandos	12 - 3 = 9
#  *	Realiza Multiplicación entre los operandos	12 * 3 = 36
#  /	Realiza División entre los operandos	12 / 3 = 4
#  %	Realiza un módulo entre los operandos	16 % 3 = 1
#  **	Realiza la potencia de los operandos	12 ** 3 = 1728
#  //	Realiza la división con resultado de número entero	18 // 5 = 3


# funciones
def suma (numA, numB):
    return numA + numB

# desde input
numA = int(input('NumA'))
numB = int(input('NumB'))

print( suma(numA, numB) )

resultado = suma(10, 5)
print(resultado)

#class

class 6tel:
 alumnos=3
 promedio=9.3

 print(f"La cantidad de alumnos de 6tel es {alumnos}")
