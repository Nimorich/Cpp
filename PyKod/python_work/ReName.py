import os
import shutil
path = 'D:/Distr/Tutors/Pyton/Python for Maya/Kolbasa'

files = os.listdir(path)
ruleName = 'Bloknot'
newDir = 'Rename'

nd = os.path.join(path, newDir)
if not os.path.exists(nd):
    os.mkdir(nd)

for f in files:
    oldName = os.path.join(path, f)
    if os.path.isfile(oldName):
        name, ext = os.path.splitext(f)
        digit = int(name.split('_')[1])
        result = ruleName + '.' + str(digit) + ext
        print (result)

        newName = os.path.join(nd, result)
        shutil.copy2(oldName, newName)


