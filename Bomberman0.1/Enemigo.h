#pragma once
class Enemigo
{
	private:
		int anchoEnemigo;
		int altoEnemigo;
		int colorEnemigo;
		int formaEnemigo;

	public:
		int getAnchoEnemigo() { return anchoEnemigo; }
		void setAnchoEnemigo(int _anchoEnemigo) { anchoEnemigo = _anchoEnemigo; }

		int getAltoEnemigo() { return altoEnemigo; }
		void setAltoEnemigo(int _altoEnemigo) { altoEnemigo = _altoEnemigo; }

		int getColoroEnemigo() { return colorEnemigo; }
		void setColorEnemigo(int _colorEnemigo) { colorEnemigo = _colorEnemigo; }

		int getFormaEnemigo() { return formaEnemigo; }
		void setFormaEnemigo(int _formaEnemigo) { formaEnemigo = _formaEnemigo; }

		void Morir();
		void Correr();

};

