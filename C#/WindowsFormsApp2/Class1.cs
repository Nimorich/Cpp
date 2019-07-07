using System;
using Namespace;

namespace Class1
{
    public class Music
    {
        public string name;
        public int cena;

        public class Gitara: Music
        {
            public int kolichestvoStrun;
            Gitara Derevo = new Gitara();
            Derevo.name = "Обычная деревянная гитара";
        }

        

    }
}

