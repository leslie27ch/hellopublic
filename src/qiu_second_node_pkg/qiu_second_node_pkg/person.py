class person:
    def __init__(self,name,age) -> None:
        self.name = name
        self.age = age
    def havefun(self,game):
        print(f"我是{self.name},我已经{self.age}岁了，我喜欢玩{game}")


def main():
    qiu = person("kunkun",14)
    qiu.havefun("math")
