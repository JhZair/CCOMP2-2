#include <iostream>
#include <vector>

using namespace std;

class Registro_notas {
private:
    int estudiantes;
    vector<float> notas;
    
public:
    Registro_notas(int cEstudiantes){
    estudiantes = cEstudiantes;
    notas.resize(estudiantes);
    }
    void setCalif(int alumn, float nota){
        notas[alumn-1]= nota;
    }
    void getCalif(const int alumn){
        cout << "Alumno" << alumn << ": " << notas[alumn-1]<< endl;
    }

};

int main() {
    Registro_notas colegio(5);
    colegio.setCalif(2,15.00);
    colegio.getCalif(2);

    return 0;
}
