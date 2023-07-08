using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
 
namespace ac
{
    class Program
    {
        static Func<string, int> PInt = int.Parse;
        static Func<string, uint> PUInt = uint.Parse;
        static Func<string, long> PLong = long.Parse;
        static Func<string, ulong> PULong = ulong.Parse;
 
        static T ConsoleReadToT<T>(Func<string, T> Parse)
        {
            return Parse(Console.ReadLine());
        }
        static T[] ConsoleReadToArray<T>(Func<string, T> Parse)
        {
            return Console.ReadLine().Split(' ').Select((x) => Parse(x)).ToArray();
        }
 
        public enum QType
        {
            ConnectXY = 1,
            SplitXY,
            WriteX
        }
 
        static void Main(string[] args)
        {
            int[] NQ = ConsoleReadToArray(PInt);
            int[][] Connect = new int[NQ[0]][];
            for (int i = 0; i < Connect.Length; i++) Connect[i] = new int[2] { -1, -1 };
            int[][] Qs = new int[NQ[1]][];
            for(int i=0;i< Qs.Length; i++)
            {
                Qs[i] = ConsoleReadToArray(PInt);
            }
            //Console.WriteLine();
            StringBuilder sb = new StringBuilder();
            for (int i = 0; i < NQ[1]; i++)
            {
                var q = Qs[i];
                switch ((QType)q[0])
                {
                    case QType.ConnectXY:
                        {
                            Connect[q[1] - 1][1] = q[2] - 1;
                            Connect[q[2] - 1][0] = q[1] - 1;
                            break;
                        }
                    case QType.SplitXY:
                        {
                            Connect[q[1] - 1][1] = -1;
                            Connect[q[2] - 1][0] = -1;
                            break;
                        }
                    case QType.WriteX:
                        {
                            sb.Clear();
                            int n = q[1]-1;
                            while (true)
                            {
                                if (Connect[n][0] == -1)
                                {
                                    break;
                                }
                                n = Connect[n][0];
                            }
                            int cnt = 0;
                            while (true)
                            {
                                if(Connect[n][1] == -1)
                                {
                                    sb.Append($"{n + 1}");
                                    cnt++;
                                    break;
                                }
                                sb.Append($"{n + 1} ");
                                n = Connect[n][1];
                                cnt++;
                            }
                            Console.WriteLine($"{cnt} {sb.ToString()}");
                            break;
                        }
                }
            }
            //Console.ReadLine();
        }
    }
}
