/*////////////////////////////////////////////////////////////////////////////
//
//
//   Tiedosto:	Kauppa.cpp
//   Projekti:	Kaupassakäyntisimulaatio
//     Versio:	1.0
//     Tekijä:	Jussi Laakkonen
//        Pvm:	30.3.2006
//
//  Tarkoitus:	Pääohjelma
//
//  Kommentit:	-
//
//////////////////////////////////////////////////////////////////////////////
//
//   Historia:
//    
////////////////////////////////////////////////////////////////////////////*/

#include "Kauppaliittyma.h"

#include <iostream>

using namespace kauppa;

int main()
{
	Kauppaliittyma kKauppa;

	kKauppa.kaynnistaJaSuorita();

	return 0;
}
