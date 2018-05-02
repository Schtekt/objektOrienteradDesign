#ifndef BIGBOX_H
#define BIGBOX_H
#include "Good.h"
class BigBox : public Good
{
private:
	float tempMax;
	float tempMin;
	bool hard;
public:
	BigBox(std::string desc, float tempCMin, float tempCMax, bool hard);
	~BigBox();
	float getTempMax();
	float getTempMin();
	bool isHard();
	void setTempMax(float tempC);
	void setTempMin(float tempC);
	void changeHard();
public:
};
#endif // !BIGBOX_H

