class Universidade
{
  private:
    char nome[30];
    //departamento
  public:
  
  Universidade(const char* n = "");
  Universidade();
  ~Universidade();
  void setNome(char* n);
  char* getNome();
};
