#!/bin/bash
clear

 


echo -e "  Presione 1 para crear grupo \n 2 para agregar usuario \n 3 crear usuario a un grupo"
read var1
if [ $var1 = 1 ];
	then
	echo "escriba el nombre del grupo"
	read var2
	sudo groupadd $var2	
	
fi
if [ $var1 = 2 ];
	then
	echo "escriba el nombre de usuario"
	read var3
	sudo useradd $var3 -d /home/$var3 -m
	passwd $var3
	
fi
if [ $var1 = 3 ];
	then
	echo "escriba el nombre del usuario"
	read var4
	echo "escriba el nombre del grupo"
	read var5
	sudo groupadd $var5
	sudo mkdir /home/$var5
	sudo useradd $var4 -d /home/$var5/$var4 -m -g $var5
	sudo passwd $var4
	
	if [ $var5 = profesores -o maestros ];
	then
	sudo chmod -R  740 /home/$var5
	fi
	if [ $var5 = administrativos ];
	then
	sudo chmod -R 744 /home/$var5
	fi
	if [ $var5 = rector ];
	then
	sudo chmod -R 777 /home/$var5 
	fi
	
fi



