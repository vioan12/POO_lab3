# POO_lab3

5. Sa se proiecteze si sa se implementeze o clasa pentru standardul ISBN
(International Standard Book Number). Un obiect din aceasta clasa este un
numar ISBN unic asociat unei carti sau reviste, format din 10 cifre
zecimale grupate în patru secvente de dimensiune variabila:
• grupul sau identificatorul de tara, pentru identificarea tarii editurii
care a publicat cartea sau revista; în mod uzual toate editurile dintr-o
anumita tara sau regiune geografica au acelasi numar pentru
grup;
• identificatorul editurii, pentru identificarea editurii în cadrul
grupului de edituri;
• identificatorul de titlu, pentru identificarea titlului unei carti sau
reviste editata de o editura;
• cifra de control, care este întotdeauna formata dintr-o singura cifra.
Spre deosebire de celelalte grupuri, cifra de control poate sa fie atât o cifra
zecimala sau litera X, corespunzând numarului 10. Cifra de control se
determina ca valoarea modulo 11 din numarul obtinut prin concatenarea
tuturor celorlalte 9 cifre. Clasa va avea ca data membru un sir de caractere
ce va reprezenta ISBN-ul, utilizând caracterul ‘-‘ pentru separarea celor
patru grupuri. Ea va trebui sa contina cel putin urmatoarele functii
membru:
• un constructor, în cazul specificarii doar a primelor trei grupuri,
cifra de control fiind generata automat;
• un constructor, pentru cazul în care se specifica complet ISBN-ul,
ca sir de 13 caractere;
• o functie membru pentru validarea cifrei de control;
• o functie membru pentru afisarea ISBN-ului.


6. Sa se proiecteze si sa se implementeze o clasa pentru reprezentarea
cartilor dintr-o biblioteca. Pentru fiecare carte trebuie specificate:
• titlul cartii;
• autorul (autorii);
• editura;
• numarul ISBN (sir de caractere);
• anul aparitiei;
• pretul.
Programul va permite crearea unui tablou cu cartile dintr-o biblioteca si
posibilitatea de cautare a unor carti în functie de: titlu, editura, sau ISBN.
Functiile clasei vor fi scrise astfel încât sa permita operatiile mentionate
mai sus.
