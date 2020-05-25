#include <stdio.h>
#include <stdlib.h>
#
#include <windows.h>
#include "uframework.h"

int main()
{
    int ancho=1280;
    int alto=720;
    initialize("MiniHeroes", ancho, alto, false);

    create_sprite("Pared1", 1);
    add_frame_to_sprite("Pared1", "Forest/Tiles/Tile_12.png");

    int size=40;
    int pisox=0;
    int pisoy=0;
    ///Bordes de pantalla
    while (pisox < 1280)
        {
        add_object(pisox, 720 - size, size, size, "Pared1");
        add_object(pisox, 40 - size, size, size, "Pared1");
        add_object(40 - size, pisoy, size, size, "Pared1");
        add_object(1280 - size, pisoy, size, size, "Pared1");
        pisox = pisox + size;
        pisoy = pisoy + size;
        }
///Muros
//1
    int murox1=0;
    while (murox1 < 520)
    {
       add_object(murox1, 540, size, size,"Pared1");
       murox1=murox1 + size;
    }
//2
    int murox2=620;
    while (murox2 < 1080)
    {
        add_object(murox2, 540, size,size,"Pared1");
        murox2=murox2+size;
    }
//3
    int muroy3=540;
    while (muroy3>120)
    {
        add_object(1080, muroy3,size,size,"Pared1");
        muroy3=muroy3-size;
    }
//4
    int cont4x;
    int cont4y;


    for (cont4x=620;cont4x<980;cont4x=cont4x+40)
    {
        for (cont4y=180;cont4y<400;cont4y=cont4y+40)
        {
            add_object(cont4x, cont4y, size,size,"Pared1");
        }
        add_object(cont4x, cont4y, size,size,"Pared1");
    }
//5
    int cont5x;
    int cont5y;

    for (cont5x=360;cont5x<520;cont5x=cont5x+40)
    {
        for (cont5y=180;cont5y<400;cont5y=cont5y+40)
        {
            add_object(cont5x, cont5y, size,size,"Pared1");
        }
        add_object(cont5x, cont5y, size,size,"Pared1");
    }
//6
    int cont6x;
    int cont6y;

    for (cont6x=120;cont6x<280;cont6x=cont6x+40)
    {
        for (cont6y=180;cont6y<400;cont6y=cont6y+40)
        {
            add_object(cont6x, cont6y, size,size,"Pared1");
        }
        add_object(cont6x, cont6y, size,size,"Pared1");
    }
//7
    int murox7=120;
    while (murox7 < 520)
    {
       add_object(murox7, 40, size, size,"Pared1");
       murox7=murox7 + size;
    }
//8
    int murox8=620;
    while (murox8 < 980)
    {
       add_object(murox8, 40, size, size,"Pared1");
       murox8=murox8 + size;
    }


{///Sprites jugador
{//Quieto
    create_sprite("Azul_idle", 4);
    add_frame_to_sprite("Azul_idle", "MiniHeroes/Azul/Azul_idle1.png");
    add_frame_to_sprite("Azul_idle", "MiniHeroes/Azul/Azul_idle2.png");
    add_frame_to_sprite("Azul_idle", "MiniHeroes/Azul/Azul_idle3.png");
    add_frame_to_sprite("Azul_idle", "MiniHeroes/Azul/Azul_idle4.png");
}
{//Caminar Izquierda
    create_sprite("Azul_walk_L", 6);
    add_frame_to_sprite("Azul_walk_L", "MiniHeroes/Azul/Azul_Walk_L1.png");
    add_frame_to_sprite("Azul_walk_L", "MiniHeroes/Azul/Azul_Walk_L2.png");
    add_frame_to_sprite("Azul_walk_L", "MiniHeroes/Azul/Azul_Walk_L3.png");
    add_frame_to_sprite("Azul_walk_L", "MiniHeroes/Azul/Azul_Walk_L4.png");
    add_frame_to_sprite("Azul_walk_L", "MiniHeroes/Azul/Azul_Walk_L5.png");
    add_frame_to_sprite("Azul_walk_L", "MiniHeroes/Azul/Azul_Walk_L6.png");
    }
{//Caminar Derecha
    create_sprite("Azul_walk_R", 6);
    add_frame_to_sprite("Azul_walk_R", "MiniHeroes/Azul/Azul_Walk_R1.png");
    add_frame_to_sprite("Azul_walk_R", "MiniHeroes/Azul/Azul_Walk_R2.png");
    add_frame_to_sprite("Azul_walk_R", "MiniHeroes/Azul/Azul_Walk_R3.png");
    add_frame_to_sprite("Azul_walk_R", "MiniHeroes/Azul/Azul_Walk_R4.png");
    add_frame_to_sprite("Azul_walk_R", "MiniHeroes/Azul/Azul_Walk_R5.png");
    add_frame_to_sprite("Azul_walk_R", "MiniHeroes/Azul/Azul_Walk_R6.png");
}
{//Escalada
    create_sprite("Azul_Climb", 4);
    add_frame_to_sprite("Azul_Climb", "MiniHeroes/Azul/Azul_Climb1.png");
    add_frame_to_sprite("Azul_Climb", "MiniHeroes/Azul/Azul_Climb2.png");
    add_frame_to_sprite("Azul_Climb", "MiniHeroes/Azul/Azul_Climb3.png");
    add_frame_to_sprite("Azul_Climb", "MiniHeroes/Azul/Azul_Climb4.png");
}
}
    int p_x= 40;
    int p_y= 600;
    int p_ancho= 80;
    int p_alto= 80;
    int p_speed=3;
    int p_dir_x;
    int p_dir_y;
    add_indexed_object("Azul_Player", p_x, p_y, p_ancho, p_alto, "Azul_idle");

    //int velocidad= 1;
    //int gravedad= 0;

while(is_window_closed()== false)
    {
        ///Controles
        bool k_a = is_key_pressed("a");
        bool k_d = is_key_pressed("d");
        bool k_w = is_key_pressed("w");
        bool k_s = is_key_pressed("s");
        bool k_i = is_key_pressed("i");
        bool k_o = is_key_pressed("o");


        bool colisiones_izquierda=false;
        bool colisiones_derecha=false;
        bool colisiones_arriba=false;
        bool colisiones_abajo=false;

        int p_prev_x=p_x;
        int p_prev_y=p_y;





        if ( (k_a == true) && (colisiones_izquierda==false) )
        {///Ir Izquierda
            p_dir_x=-1;
            set_indexed_object_sprite("Azul_Player", "Azul_walk_L");
            p_x= p_speed*p_dir_x;
            move_indexed_object_origin("Azul_Player", p_x, 0);
        }
        else if ( (k_d == true) && (colisiones_derecha==false) )
        {///Ir Derecha
            p_dir_x=1;
            set_indexed_object_sprite("Azul_Player", "Azul_walk_R");
            p_x= p_speed*p_dir_x;
            move_indexed_object_origin("Azul_Player", p_x, 0);
        }
        else if ( (k_w == true) && (colisiones_arriba==false) )
        {///Ir Arriba
            p_dir_y=-1;
            set_indexed_object_sprite("Azul_Player", "Azul_Climb");
            p_y= p_speed*p_dir_y;
            move_indexed_object_origin("Azul_Player", 0, p_y);
        }
        else if ( (k_s == true) && (colisiones_abajo==false) )
        {///Ir Abajo
            p_dir_y=1;
            set_indexed_object_sprite("Azul_Player", "Azul_Climb");
            p_y= p_speed*p_dir_y;
            move_indexed_object_origin("Azul_Player", 0, p_y);
        }
        else
        {///Quieto
            set_indexed_object_sprite("Azul_Player", "Azul_idle");
        }


    if (p_y <= 300)
        {
            colisiones_arriba=true;
            p_y=p_y-1;
            //move_indexed_object_origin("Azul_Player", p_x, p_y);
        }
        else
        {
            colisiones_arriba=false;
        }
        p_y=p_y;

        Sleep(18);

    }
    return 0;
}
