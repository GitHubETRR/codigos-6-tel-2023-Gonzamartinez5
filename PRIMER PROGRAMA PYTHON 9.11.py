print("Bienvenido a la base de datos de la ETRR")

funcione = True

class Curso:
    def __init__(self, especialidad, alumnos, promedio):
        self.especialidad = especialidad
        self.alumnos = alumnos 
        self.promedio = promedio

    def mostrar(self):
        print(f'Este curso es de especialidad {self.especialidad}')
        print(f'Este curso tiene {self.alumnos} alumnos')
        print(f'Este curso consta de un promedio de {self.promedio}')

tel1824 = Curso('TEL', 24, 9.5)
tem1824 = Curso('TEM', 30, 8)
tel1925 = Curso('TEL', 31, 7.5)
tem1925 = Curso('TEM',27, 8.9)
tel2026 = Curso('TEL',30, 8)
tem2026 = Curso('TEM',33, 8.7)

while funcione:
    eleccion = input('Elige el curso al que quieras acceder a su informacion, debes escribir la especialidad y a continuacion el nombre de la camada\n')
    if eleccion == 'tel1824':
        tel1824.mostrar()
    elif eleccion == 'tem1824':
        tem1824.mostrar()
    elif eleccion == 'tel1925':
        tel1925.mostrar()
    elif eleccion == 'tem1925':
        tem1925.mostrar()
    elif eleccion == 'tel2026':
        tel2026.mostrar()
    elif eleccion == 'tem2026':
        tem2026.mostrar()
    else:
        print('El que curso que usted busca, no se encuentra en la lista de datos')
        
    funcione = int(input("Si quiere ver otro curso, presione cualquier numero, sino presione 0: "))
print("Gracias por utilizar el servicio")
