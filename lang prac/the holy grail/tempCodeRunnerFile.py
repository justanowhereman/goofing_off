class Hello:
    def __init__(self, say, name):
        self.say= say
        self.name= name
        
    def greet (self):
        print('hello')

gr =Hello('hello', 'Sam')
print(gr.say)
print(gr.name) 