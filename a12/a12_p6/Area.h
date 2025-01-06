/*
CH-230-A
a12_p6.h
Kejsi Nuredini
knuredini@jacobs-university.de
*/

#ifndef _AREA_H
#define _AREA_H

class Area {
	public:
		Area(const char *n);
		virtual ~Area();
		void getColor() const;
		virtual double calcArea() const = 0;
        //adding perimeter method definition
        virtual double calcPerim() const = 0;
	private:
		char color[11];
};
#endif
