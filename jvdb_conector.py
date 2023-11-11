import subprocess

class Jvdb:
    def __init__(self,basededatos):
        self.basededatos = basededatos
    def insert(self,coleccion,documento,contenido):
        self.operacion = "insert"
        self.coleccion = coleccion
        self.documento = documento
        self.contenido = contenido
        comando = '"C:\\Users\\Jose Vicente\\Documents\\GitHub2\\jvdb\\jvdb.exe" '+self.operacion+' '+self.basededatos+' '+self.coleccion+' '+self.documento+' "'+self.contenido+'"'
        resultado = subprocess.run(comando,shell=True,stdout=subprocess.PIPE,stderr=subprocess.PIPE,text=True)
        if resultado.returncode == 0:
            return("ok")
        else:
            return("ko")
