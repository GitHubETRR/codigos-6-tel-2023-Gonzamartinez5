def programa():

    total_factura = float(input("Ingrese el total de la factura: $"))
    porcentaje_propina = float(input("Ingrese el porcentaje de propina que desea dejar: "))

    # Calcular la cantidad de propina
    propina = total_factura * (porcentaje_propina / 100)

    # Mostrar el total de la factura y la cantidad de propina
    print(f"\nTotal de la factura: ${total_factura:.2f}")
    print(f"Propina ({porcentaje_propina}%): ${propina:.2f}")  #2 decimales despues del numero


while True:
    print("Bienvenido a la calculadora de propina del negocio")
    programa()
    salir = input("¿Quieres salir del programa? (si/no): ").lower()
    if salir != "no":
        print("¡Hasta luego!")
        break
