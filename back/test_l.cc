#include <libpq-fe.h>
#include <iostream>

int main() {
    PGconn* conn = PQconnectdb("host=localhost dbname=postgres");
    if (PQstatus(conn) == CONNECTION_OK) {
        std::cout << "Successfully connected to PostgreSQL!" << std::endl;
    }
    PQfinish(conn);
    return 0;
}