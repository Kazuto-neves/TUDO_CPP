if not exist obj (mkdir obj)
if not exist dist (mkdir dist)
gcc -c -o obj/Disciplina.o src/Disciplina.cpp -Iinclude
gcc -c -o obj/DisciplinaTipo1.o src/DisciplinaTipo1.cpp -Iinclude
gcc -c -o obj/DisciplinaTipo2.o src/DisciplinaTipo2.cpp -Iinclude
gcc -c -o obj/DisciplinaTipo3.o src/DisciplinaTipo3.cpp -Iinclude
gcc -c -o obj/Historico.o src/Historico.cpp -Iinclude
gcc -c -o obj/Principal.o src/Principal.cpp -Iinclude

gcc -o dist/Historico.exe obj/*.o -lstdc++