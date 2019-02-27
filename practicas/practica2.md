## Objetivo
Modificar al programa sh.c para ejecutar el comando anterior

## Herramientas
git
make
gcc

## Conceptos
1) Como se crean nuevos procesos
+ Un programa padre (sh.c) ejecuta la llamada a sistema fork
+ La llamada a sistema fork clona al proceso padre
+ El proceso hijo manda a llamar a exec para ejecutar otro codigo.

## Que aprendi:
A crear una funcion que reciba una p, para poder ejecutar la funcion anterior
## Url del commit:
https://github.com/ChebaCheba/SO/commit/3243ddac239c26c751ab8e3076ffef4abd47a893
