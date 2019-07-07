spisok_G = ['vovan', 'igor', 'denis', 'maks', 'pashka-kakashka']

ne_pridet = 'igor'

spisok_G.remove(ne_pridet)
spisok_G.remove('maks') #Дополнительное удаление из списка
spisok_G.insert(1, 'leha')
priglashenie = '\tУважаемый ' + spisok_G[0].title() + '!' + '\nПриглашаю тебя на торжественный праздник.' '\n\nСписок приглашенных: ' + str(spisok_G)
print(priglashenie)
