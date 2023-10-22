FROM ubuntu:latest

WORKDIR /root
COPY . /root
USER root
ENV PATH="${PATH}:."
RUN apt update && apt install -y sudo python3 python3-pip gcc wget nano unzip && pip3 install -r requirements.txt
CMD ["/bin/bash"]