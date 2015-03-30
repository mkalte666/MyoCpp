#include "../include/MyoCpp.hpp"

int main(int argc, char** argv)
{
	if(argc<2) {
		std::cout << "Usage: <test> [port]" << std::endl;
		return 0;
	}
	std::string port(argv[1]);
	//MyoCpp::BT bt(port);

	MyoCpp::MyoRaw raw(port);
	raw.AddEmgHandler([](std::vector<unsigned short>vals) {
		std::cout << "(";
		for (auto v : vals) {
			std::cout << v << ",";
		}
		std::cout << std::endl;
	});	
	while(true) {

	}
}
