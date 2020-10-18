// Instance
resource "aws_instance" "web" {
    ami = "${data.aws_ami.ubuntu.id}"  
    availability_zone = "us-east-2a"
    instance_type = "t2.micro"
    key_name = "${aws_key_pair.my_key.key_name}"
    vpc_security_group_ids = ["${aws_security_group.public.id}"]
    subnet_id = "${aws_subnet.public.id}"
    associate_public_ip_address = true
    
    tags {
            Name = "web"
    }

    connection {
        user                = "ubuntu"
        private_key         = "${file("~/.ssh/id_rsa")}"
        agent               = false
        host                = "${aws_instance.web.public_ip}"
    }
provisioner "remote-exec" {
    inline = [
            "echo 'hello world!!'
        ]
    }
}
