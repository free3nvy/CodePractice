# WSL通过Win访问网络，所以WSL的网关指向的是Windows，DNS服务器指向的也是Windows，设置WSL的proxy为win的代理ip+端口即可
# WSL中的DNS server在/etc/resolv.conf中查看，该文件是由/etc/wsl.conf自动生成的。
# 如果关闭了wsl.conf中自动生成resolve.conf并自行修改了resolve.conf，DNS nameserver并不是本机win ip
# 需要开启wsl.conf的自动生成，再运行以下命令
# https://zhuanlan.zhihu.com/p/153124468

# 添加到环境变量设置中，例如~/.zshrc
export hostip=$(cat /etc/resolv.conf |grep -oP '(?<=nameserver\ ).*')
export https_proxy="http://${hostip}:7890"
export http_proxy="http://${hostip}:7890"
