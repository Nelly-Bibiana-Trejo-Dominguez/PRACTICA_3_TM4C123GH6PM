function Led

clc;

A=0;
B=0;
%Borra datos que se encuentren previos y vuelve a declarar el puerto y la
%velocidad de transmisión
puerto=serial('COM6');
puerto.BaudRate=19200;


writeline(puerto,"CARLO%")

end