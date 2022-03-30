- Instalar gtest:
$ sudo apt-get update && sudo apt-get upgrade
$ sudo apt-get Install libgtest-dev
$ cd ~

- Compilar a biblioteca do gtest:
$ g++ -I /usr/include/gtest/ -I /usr/src/gtest/ -c /usr/src/gtest/src/gtest-all.cc

- Arquivar o arquivo gerado para a biblioteca estatica
$ ar -rv libgtest.a gtest-all.o

- Mover para um lugar onde o GCC linker pode encontrar:
$ sudo mv libgtest.a /usr/local/lib/libgtest.a