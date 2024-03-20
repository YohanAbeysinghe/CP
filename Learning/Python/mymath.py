#This is created as a test file to name.ipynb where the __name__
#feature is tested.


def add(a,b):
    return a+b, 


print(__name__)

if __name__ == '__main__':
    print (add(20,3))

#Since when running this py file only, the hole code is the main code.
# Hence __name__ is the __main__.

#But when this file is imported in another file, this code blocks become
# mymath. Hence the part inside the if statement runs only when we 
# run this code itself.
