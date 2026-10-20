/* Test-only original ERR boundary. Never compiled into production libraries. */
void (*ESignOIDTestError)(int,int,int,const char *,int);
void ESignOriginal_100604c0c(int library,int function,int reason,const char *file,int line) {
    ESignOIDTestError(library,function,reason,file,line);
}
