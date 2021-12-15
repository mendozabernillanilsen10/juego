#pragma once

void settingsScreen() {
	char input;
	bool showSettings = true;
	while (showSettings)
	{
		system("cls");
		cout << "\n\n\n\t\t\t\t    CONFIGURACIÓN";
		cout << "\n\n\n\n\t1) dificultades: ";
		if (smartShootsByComputer) {
			setColor(12, 15); cout << "Dificil"; setColor(0, 15);
		}
		else {
			setColor(9, 15); cout << "Facil"; setColor(0, 15);
		}
		cout << "\n\n\t2) Colocar automáticamente los barcos: ";
		if (placePlayerShipsAutomatically) {
			setColor(2, 15); cout << "verdadero"; setColor(0, 15);
		}
		else {
			setColor(12, 15); cout << "falso"; setColor(0, 15);
		}
		cout << "\n\n\t3)  Mostrar naves de computadora: ";
		if (showOpponentShips) {
			setColor(2, 15); cout << "verdadero"; setColor(0, 15);
		}
		else {
			setColor(12, 15); cout << "falso"; setColor(0, 15);
		}
		cout << "\n\n\n\n\n\tUso "; setColor(6, 15); cout << "numerical "; setColor(0, 15); cout << "  Para cambiar variables.";
		cout << "\n\n\tUse "; setColor(6, 15); cout << "ENTER"; setColor(0, 15); cout << "empezar.";


		switch (input = _getch()) {
		case '1':
			smartShootsByComputer = !smartShootsByComputer;
			break;
		case '2':
			placePlayerShipsAutomatically = !placePlayerShipsAutomatically;
			break;
		case '3':
			showOpponentShips = !showOpponentShips;
			break;
		case 13:
			showSettings = false;
			break;
		default:
			break;
		}
	}
	screenCover(0, 0);
	screenCover(15, 15);
}