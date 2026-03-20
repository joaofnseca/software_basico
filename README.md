# Desenvolvimento C / C++
- Repositório base para uso em disciplinas de desenvolvimento de software em C/C++
- Configurado para desenvolvimento com GCC/G++
- Pensado para ser usado como "Monorepo" para uma série de projetos de aula
- As instruções a seguir referem-se ao uso deste repositório em conjunto com o CodeSpaces

## Criação de Projetos C/++
Os scripts **create-c-project.sh**/**create-cpp-project.sh** criam um projeto C ou C++ para ser usado em disciplinas de algoritmos e programação
- Exemplo: para criar um projeto C usando o script use o comando: `./create-c-project.sh meu-projeto`
- O projeto é criado utilizando o [CMake](https://cmake.org/), uma ferramenta moderna e eficiente para gerenciamento de projetos com vários módulos e dependências (alternativa ao ``Makefile`` criado manualmente)
- Para compilar e executar o projeto use as opções do VSCode, ou o terminal
