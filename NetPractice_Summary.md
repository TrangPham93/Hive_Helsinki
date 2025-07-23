# NetPractice
[Reference Source](https://www.ibm.com/docs/en/aix/7.2.0?topic=addressing-internet-addresses)

1. IP (Internet protocol) v6
• IPv4: limited address space and routing complexity, 32-bit address
∘ IPv4 is written as x.y.z.w, x, y, z, w is [0, 255].
∘ IPv4 includes: NID = 8 bits, HID = 24 bits. --> there are 2^8 = 256 total networks and 2^24 = 16M host per networkk. 
• IPv6: 128-bit addressing
∘ link-local: allow host to construct a valid address from predefined link-local prefix and its local identifier
∘ local identifier is derived from MAC(medium access control) address
• packet tracing: verify the path of a packet through the layers to its destination

2. ICP/IP suite of protocol
• application layer: application
• transport layer: UDP / TCP: 
∘ allow program to send and receive message from application on other host
∘ break info to packet, add packet header (destination address), send to network interface 
∘ UDP (user datagram protocol): offer no assurance of datagram delivery or duplication protection. but sender can specify source and destination port
∘ TCP (transmission control protocol): provides reliable message delivery.
• network layer: network (hardware interface)
• hardware: physical network

3.  (CLASSFUL ADDRESSING) TCP/IP addressing scheme consists of: 
	
• Internet Protocol (IP) address: use 32 bit, 2-part address field: to specify network and host on a network
‣ network address
‣ host (local) address
∘ Class A addresses
‣ A Class A address consists of an 8-bit network address and a 24-bit local or host address.
‣ The higher-order bit of the first octet in class A is always set to 0
‣ The default subnet mask for Class A is 255.x.x.x.
‣ IP addresses belonging to class A ranges from 0.0.0.0 - 127.255.255.255. 
∘ Class B addresses
‣ A Class B address consists of a 16-bit network address and a 16-bit local or host address.
‣ The default subnet mask for class B is 255.255.x.x
‣ The higher-order bits of the first octet of IP addresses of class B are always set to 10
‣ IP addresses belonging to class B ranges from 128.0.0.0 – 191.255.255.255.
∘ Class C addresses
‣ A Class C address consists of a 24-bit network address and an 8-bit local host address.
‣ The default subnet mask for class C is 255.255.255.x
‣ The higher-order bits of the first octet of IP addresses of class C is always set to 110
‣ IP addresses belonging to class C range from 192.0.0.0 – 223.255.255.255
∘ Internet addresses using zeros
‣ When a C class Internet address contains a 0 as the host address portion, (for example, 192.9.200.0), TCP/IP sends a wildcard address on the network.
∘ Class D: multicast address
‣ 224.0.0.0 to 239.255.255.255 
∘ Class E: reserved  for experimental and research purpose
∘ While finding the total number of host IP addresses, 2 IP addresses are not counted and are therefore, decreased from the total count because the first IP address of any network is the network number and whereas the last IP address is reserved for broadcast IP.
Subnet addressing allows an autonomous system made up of multiple networks to share the same Internet address.
∘ subnet address includes:
‣ host address is at least 1-bit wide. 
‣ subnet address: constant width: if subnet_address is 0, the network is not divided to subnets
‣ network address: is the internet address for the network
subnet mask: When a host sends a message to a destination, the system must determine whether the destination is on the same network as the source or if the destination can be reached directly through one of the local interfaces. The system compares the destination address to the host address using the subnet mask.
‣ The subnet mask is a set of 4 bytes, just like the Internet address. The subnet mask consists of high bits (1's) corresponding to the bit positions of the network and subnetwork address, and low bits (0's) corresponding to the bit positions of the host address.
‣ Network (8 bits) | local address (24 bits) --> subnet address ( 12 bits) | host address (12 bits)


• 2 special cases of IP address:
‣ Broadcast address: TCP/IP send data to all hosts on local network or all directly connected netework --> broadcast messages
‣ Local loopback address: 127.0.0.0 – 127.255.255.255. Hosts use local loopback addresses to send messages to themselves. 
‣ 0.0.0.0 – 0.0.0.8: used to communicate within the current network.

4. (CLASSLESS ADDRESSING)

• Representation:
∘  a . b . c . d / n : n is the number of bits that are present in Block ID/Network ID
• Rules for forming CIDR Blocks:
∘ All IP addresses must be contiguous.
∘ Block size must be the power of 2 (2n). If the size of the block is the power of 2, then it will be easy to divide the Network. Finding out the Block Id is very easy if the block size is of the power of 2.
∘ First IP address of the Block must be evenly divisible by the size of the block. in simple words, the least significant part should always start with zeroes in Host Id. Since all the least significant bits of Host Id is zero, then we can use it as Block Id part.
∘ Example: Check whether 100.1.2.32 to 100.1.2.47 is a valid IP address block or not?

All the IP addresses are contiguous.
Total number of IP addresses in the Block = 16 = 24.
1st IP address: 100.1.2.00100000 Since, Host Id will contains last 4 bits and all the least significant 4 bits are zero. Hence, first IP address is evenly divisible by the size of the block.

5. TCP/IP deamons (= server)
Deamons are processes that run continuously in the background and perform functions required by other processes without interupting other processes. 

5. Routing: 
• 2 types
∘ Static routing: 
‣ maintain routing table manually, practical for a single network communicating with one or two other networks.
∘ Dynamic routing: 
‣ deamon updates the routing table automatically. 
• gateway is a type of router, route at the network level. 
routing table
∘ Router is a networking device that forwards data packet between computer networks. it usually connect to 2 or more different networks
∘ Routing table is a set of rules, to determine where data packets traveling over an IP network.
