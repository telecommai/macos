#ifndef ALPHABETICALSORTSHAREDLIB_H
#define ALPHABETICALSORTSHAREDLIB_H


#include <QString>

class AlphabeticalSortSharedLib
{
public:
	AlphabeticalSortSharedLib();
	~AlphabeticalSortSharedLib();

	QString GetChineseSpell(QString& src);

private:
	QString strChineseFirstPY;
};

#endif // ALPHABETICALSORTSHAREDLIB_H
