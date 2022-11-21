#include <iostream>
#include "./modules/headers/encript.h"
#include "./modules/headers/decript.h"
#include "./modules/headers/auxiliary.h"

int main()
{

	std::string s = inputText("input");
	std::string k = inputText("key");

	toLower(&s);
	toLower(&k);

	std::vector<char> cript;
	const std::vector<char> msg(s.begin(), s.end());
	const std::vector<char> key(k.begin(), k.end());

	cript = encript(key, msg);
	outputText(cript, "criptogram");
	outputText(decript(key, cript), "output");

	return 0;
}