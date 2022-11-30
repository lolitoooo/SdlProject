#include <stdio.h>
#include <stdlib.h>
#include <mariadb/mysql.h>

int main(int argc, char **argv){

static char *host = "localhost";
static char *user = "root";
static char *pass = "Respons11";
static char *dbname = "TEST";

unsigned int port = 3306;
static char *unix_socket = NULL;
unsigned int flag = 0;

MYSQL *conn;
MYSQL_RES *res;
MYSQL_ROW row;

conn = mysql_init(NULL);

if(!mysql_real_connect(conn, host, user, pass, dbname, port, unix_socket, flag)){
    fprintf(stderr, "\nerror: %s, [%d]", mysql_error(conn), mysql_errno(conn));
    exit(1);
}
printf("\nconnection success");
mysql_query(conn, "SELECT * FROM test");

res = mysql_store_result(conn);

while (row = mysql_fetch_row(res))
{
    printf("\nContenu de la table test : %s %s\n", row[0], row[1]);
}

mysql_free_result(res);
mysql_close(conn);
return EXIT_SUCCESS;
}