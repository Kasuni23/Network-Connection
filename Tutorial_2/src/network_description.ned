//
// This program is free software: you can redistribute it and/or modify
// it under the terms of the GNU Lesser General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.
// 
// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU Lesser General Public License for more details.
// 
// You should have received a copy of the GNU Lesser General Public License
// along with this program.  If not, see http://www.gnu.org/licenses/.
// 

package tutorial_2;

//
// TODO auto-generated type
//
network Network_description
{
    types:
        simple My_Node
        {
            gates:
                input input_gate;
                output output_gate;
        }

    submodules:
        Computer_1: My_Node;
        Computer_2: My_Node;
        Computer_3: My_Node;
        Computer_4: My_Node ;
        Computer_5: My_Node;
    connections:
        Computer_1.output_gate --> Computer_2.input_gate;
        Computer_2.output_gate --> Computer_3.input_gate;
        Computer_3.output_gate --> Computer_4.input_gate;
        Computer_4.output_gate --> Computer_5.input_gate;
        Computer_5.output_gate --> Computer_1.input_gate;
}
