while True:
    # Pedir al usuario el nombre del alumno y la nota
    nombre_alumno = input("Ingrese el nombre del alumno:  ")
    

    # Salir del programa si el usuario ingresa "salir"
    if nombre_alumno.lower() == "salir":
        break

    nota = float(input("Ingrese la nota del alumno: "))

    # Calcular el porcentaje de beca
    if nota >= 9.5:
        porcentaje_beca = 80
    elif nota >= 8.5 and nota <= 9.4:
        porcentaje_beca = 40
    elif nota >= 8.0 and nota <= 8.4:
        porcentaje_beca = 20
    else:
        porcentaje_beca = 0

    # Mostrar el resultado
    print(f"El alumno {nombre_alumno} tiene un {porcentaje_beca}% de beca.")