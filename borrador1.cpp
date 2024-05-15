#include <iostream>
using namespace std;

int main() {
  // Esta es la variable para almacenar la respuesta del usuario
  string respuestaC = "si", respuestaI = "no", respuestaUsuario; 

  cout<<"Bienvenidos a Mepheris, ¿Estás listo para tu misión? (si/no): "; cin>> respuestaUsuario ;

  for (;;){
     
    if (respuestaUsuario == respuestaI) {
    cout<< "Vale, capaz esta misión no era para ti, nos vemos la próxima!" << endl; 
     return 0;
  }else (respuestaUsuario == respuestaC); {
  cout<< "¡Perfecto, esta misión es sólo para valientes!, comencemos..." << endl; 
  cout<<"Invierno del año 325, últimos días de la rebelión de los 8 magnos..." << endl;
  cout<<"Luego de que la flota rebelde fuera destruida durante la batalla naval del golfo de Zuel,  " << endl; 
  cout<<"las tropas de la comandante Alicia Wulfen avanzaron sin resistencia y tomaron el puerto de Umaril." << endl; 
  cout<<"Tu misión será recuperar la tierra perdida, usando proyectiles para destruir las 26 plataformas defensivas del enemigo" << endl ;
  cout<<"repartidas alrededor de la muralla..." << endl ; 
   break;
  }
  }

  

  string empezar = "si", noEmpezar = "no", respuestaUsuario2; 

  for (;;){
     cout << "¿Estás seguro de tu decisión? (si/no)"; cin>> respuestaUsuario2; 
    if (respuestaUsuario2 == noEmpezar) {
    cout<< "Vale, vuelve más tarde" << endl; 
    
     return 0; 
  }else (respuestaUsuario2 == empezar); {

    cout<< "Para comenzar necesitamos: " << endl;
    cout<< "1- El número de cañones a simular" << endl; 
    cout<<"2- La posición inicial del cañon (x,y)" << endl;
    cout<<"3- La velocidad del cañon" << endl; 
    cout<<"4- El ángulo que forma la trayectoria del cañon" << endl; 
    cout<<"5- El número de objetivos y su posición (x,y)" << endl; 

   break; 
  }
  }

   int cantCañones, Xo, Yo, Vo, O, cantidadObjetivos, Xi, Yi; 
   float velocidadI, angulo; 

    /*CantCañones : número de cañones
     Xo y Yo es la posición inicial
     Vo es módulo del vector velocidad inicial
     O es ángulo que forma el vector inicial con la horizontal
    */
   
   cout<<"Nombre ";
   cout<<"Ingrese la cantidad de proyectiles: "<< endl; ; cin>> cantCañones; 
   cout<<"Indica las coordenadas del cañon: "<< endl; cin>> Xo; cin>> Yo; 
   cout<<"Ingreses la velocidad del cañon: "<< endl; cin>> velocidadI; 
   cout<<"Ingrese el ángulo que forma la trayectoria del cañon: " << endl; cin>> angulo; 
   cout<<"Cantidad de objetivos: "; cin>> cantidadObjetivos; 
   cout<<"Indica las coordenadas del objetivo"; cin>> Xi; cin>> Yi; 
   cout<<"Usted lanzará "<< cantCañones << endl; 
   cout<<"En las siguientes coordenadas"<< Xo, Yo; 





} 








  













/*
  do
  {
    cout << "Bienvenidos a Mepheris, ¿Estás listo para tu misión? (si/no): "; cin>> respuesta ;
     if (respuesta == 'no'){
     cout << "Vale, capaz esta misión no era para ti, nos vemos la próxima!" << endl; 
     break; } else { 
      cout << "¡Perfecto, esta misión es sólo para valientes!, comencemos..." << endl; 

    }  
  } while (respuesta != 'no'); 
  return 0;  
}
*/
  

 /*
  while (respuesta == "Sí" || respuesta == "si" || respuesta == "SI")
  {
    do ()
     cout << "Vale, capaz esta misión no era para ti, nos vemos la próxima!" << endl;
     break; 
    }
  }
  */



  
  




/*
  if (respuesta == "Sí" || respuesta == "si" || respuesta == "SI") {
    cout << "¡Perfecto, esta misión es sólo para valientes!, comencemos..." << endl;
  } else { 
    cout << "Vale, capaz esta misión no era para ti, nos vemos la próxima!" << endl;
    break; 
  }
  
  
/*
    cout<< "Tu misión será" << endl ;



      //voy a declarar las variables
  int cantCañones, Xo, Yo, Vo, O; 
    /*cantCañones : número de cañones
     Xo y Yo es la posición inicial
     Vo es módulo del vector velocidad inicial
     O es ángulo que forma el vector inicial con la horizontal
    */
/*
   //ejemplo
   cout<<"Ingrese la cantidad de cañones: "<< endl; ; cin>> cantCañones; 
   cout<<"Indica las coordenadas del cañon"<< endl; cin>> Xo; cin>> Yo; 
   cout<<"Usted lanzará "<< cantCañones << endl; 
   cout<<"En las siguientes coordenadas"<< Xo, Yo; 
   

   int cantObjetivos, M;

*/ 
