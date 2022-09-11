using System;
using System.IO;
using System.Text.Json;

namespace TugasJsonForm
{
    class User
    {
        public int ucount { get; set; }
        public string Username { get; set; }
        public int pacount { get; set; }
        public string Password { get; set; }
    }
    class UsPass
    {
        static void Main(string[] args)
        {
            Console.WriteLine("Hello World!");
            User user = new User();
            Console.WriteLine("Username : ");
            user.Username = Console.ReadLine();
            Console.WriteLine("Password : ");
            user.Password = Console.ReadLine();

            user.ucount = user.Username.Length;
            user.pacount = user.Password.Length;

            string UserFile = "UserPass.json";
            string jsonString = JsonSerializer.Serialize(user);
            File.WriteAllText(UserFile, jsonString);

            Console.WriteLine(File.ReadAllText(UserFile));
        }
    }
}
