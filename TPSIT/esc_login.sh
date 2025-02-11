#!/bin/bash

echo "Ciao, inserisci il tuo nome:"
read nome

echo "inserisci la password:"
read password

if [ $nome = "admin" ];
then
        echo "Benvenuto, lieto di conoscerla"
else
        echo "riprova"
fi
