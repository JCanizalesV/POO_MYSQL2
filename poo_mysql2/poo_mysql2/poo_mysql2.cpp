
#include <mysql.h>
#include <iostream>

using namespace std;

int q_estado;

int main()
{

    MYSQL* conectar;
    conectar = mysql_init(0);
    conectar = mysql_real_connect(conectar, "localhost", "root", "123456", "poo_mysql2", 3306, NULL, 0);

    if (conectar) {

        //cout << "CONEXION REALIZADA CON EXITO" << endl;
        
        string marcas;
        cout << "Ingrese una nueva Marca:        ";
        cin >> marcas;
        //INSERT INTO `poo_mysql2`.`marcas` (`id_marca`, `marca`) VALUES ('2', 'ADIDAS');
        string insert = "INSERT INTO `poo_mysql2`.`marcas` (`marca`) VALUES ('"+ marcas + "')";
        const char* i = insert.c_str();
        q_estado = mysql_query(conectar,i);

        if (!q_estado){
            cout <<"INGRESO EXITOSO" << endl;
        }
        else
        {
            cout << "NO SE REALIZO EL INGRESO" << endl;
        }

    }
    else {
        cout << "LA CONEXION NO SE REALIZO CON EXITO" << endl;
    }

    cout << "" << endl;
    system("pause");

    return 0;
}
