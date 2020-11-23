#include <iostream>

class Socket
{
public:
    Socket()
    {}

    ~Socket()
    {}

    void close()
    {
        std::cout << "close Socket" << std::endl;
    }
};

int main()
{
    auto deletor = [](Socket* pSocket) {
        pSocket->close();
        delete pSocket;
    };

    std::unique_ptr<Socket, void(*)(Socket * pSocket)> spSocket(new Socket(), deletor);
    return  0;
}