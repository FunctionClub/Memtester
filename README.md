# Memtester
检测VPS真实可分配内存的小工具，适用于检测VPS超售情况。本程序检测的可分配内存指的是用户使用时最大能占用的内存量。

#使用

CentOS / RHEL:

	yum install wget -y
    yum groupinstall "Development Tools" -y
	wget https://raw.githubusercontent.com/FunctionClub/Memtester/master/memtester.cpp
	gcc -l stdc++ memtester.cpp
	./a.out

Ubuntu / Debian：

    apt-get update
	apt-get install wget build-essential -y
	wget https://raw.githubusercontent.com/FunctionClub/Memtester/master/memtester.cpp
	gcc -l stdc++ memtester.cpp
	./a.out

在进程被杀死前可以测出当时最大的内存占用
