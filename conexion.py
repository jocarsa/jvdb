import subprocess

comando = '"C:\\Users\\Jose Vicente\\Documents\\GitHub2\\jvdb\\jvdb.exe" insert miempresa clientes cliente6 "esto es una prueba"'
resultado = subprocess.run(comando,shell=True,stdout=subprocess.PIPE,stderr=subprocess.PIPE,text=True)

if resultado.returncode == 0:
    print("ok")
else:
    print("ko")
