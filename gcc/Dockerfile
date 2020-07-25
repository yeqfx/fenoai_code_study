FROM gcc:latest

LABEL maintainer fenoai

RUN apt-get update && apt-get install -y vim locales xclip \
    && localedef -f UTF-8 -i ko_KR ko_KR.UTF-8

ENV LC_ALL ko_KR.UTF-8

COPY .vimrc /root/
COPY jellybeans.vim /root/.vim/colors/

WORKDIR /src

CMD ["/bin/bash"]