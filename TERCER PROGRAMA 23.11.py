import random


#Primer juego
def Adivina_el_numero():
    while True:
        numero_secreto = random.randint(1, 100)
        intentos = 0

        print("¡Bienvenido al juego Adivina el Número!")
        
        while True:
            intento = int(input("Adivina el número entre el 1 al 100: "))
            intentos += 1

            if intento == numero_secreto:
                print(f"¡Correcto! Lo adivinaste en {intentos} intentos.")
                break
            elif intento < numero_secreto:
                print("Demasiado bajo. Intenta de nuevo.")
            else:
                if intento == 999:
                    salir()
                print("Demasiado alto. Intenta de nuevo.")

        jugar_nuevamente = input("¿Quieres jugar de nuevo? (si/no): ").lower()
        if jugar_nuevamente != 'si':
            print("¡Hasta luego!")
            break



#Segundo juego 
def piedra_papel_tijeras():
    opciones = ["piedra", "papel", "tijeras"]
    print("¡Bienvenido al juego Piedra, papel o tijera!")

    while True:
        # Código del juego
        computadora = random.choice(opciones)
        usuario = input("Elige piedra, papel o tijeras (o 'q' para salir): ").lower()

        if usuario == 'q':
            print("¡Hasta luego!")
            break

        print(f"La computadora eligió {computadora}.")

        if usuario not in opciones: #verifica si el usuario ingreo algo diferente a PPT
            print("Opción no válida. Por favor, elige piedra, papel o tijeras.")
            continue  #el continue te skipea las lineas de abajo y sube devuelta hasta arriba del while

        if usuario == computadora:
            print("¡Empate!")
        elif (
            (usuario == "piedra" and computadora == "tijeras") or
            (usuario == "papel" and computadora == "piedra") or
            (usuario == "tijeras" and computadora == "papel")
        ):
            print("¡Ganaste!")
        else:
            print("¡Perdiste!")

        jugar_nuevamente = input("¿Quieres jugar de nuevo? (si/no): ").lower()
        if jugar_nuevamente != 'si':
            print("¡Hasta luego!")
            break

print("Bienvenido al simulador de juegos tradicionales")
print("Este simulador consta con dos juegos, Adivina el numero y Piedra Papel o Tijera")

funcionar = True 
while funcionar:
    print("Elige el juego que quieras jugar, si presiona 0 eligiras Adivina el numero y si presiona 1 jugaras P,P,T:  ")
    Eleccion = int(input())
    if Eleccion == 0:
        Adivina_el_numero()
        salir = input("¿Quieres salir del programa? (si/no): ").lower()
        if salir != "no":
            print("¡Hasta luego!")
            break
    elif Eleccion == 1:
        piedra_papel_tijeras()
        salir = input("¿Quieres salir del programa? (si/no): ").lower()
        if salir != "no":
            print("¡Hasta luego!")
            break
    else:
       print("No se elegio un numero permitido")