<?php
// Kết nối đến cơ sở dữ liệu
$servername = "localhost";
$username = "root"; // Thay thế bằng tên người dùng của bạn
$password = "";     // Thay thế bằng mật khẩu của bạn
$dbname = "test_db"; // Thay thế bằng tên cơ sở dữ liệu của bạn

$conn = new mysqli($servername, $username, $password, $dbname);

// Kiểm tra kết nối
if ($conn->connect_error) {
    die("Kết nối thất bại: " . $conn->connect_error);
}

// Lấy dữ liệu từ form
$user = $_POST['username'];
$pass = $_POST['password'];

// Câu truy vấn dễ bị tấn công SQL Injection
$sql = "SELECT * FROM users WHERE username = '$user'";
$result = $conn->query($sql);

// Kiểm tra xem người dùng đã tồn tại chưa
if ($result->num_rows > 0) {
    // Nếu tài khoản tồn tại, bỏ qua mật khẩu và đăng nhập thành công
    echo "Đăng nhập thành công!";
} else {
    // Nếu không có người dùng, thêm người dùng mới vào bảng
    $insert_sql = "INSERT INTO users (username, password) VALUES ('$user', '$pass')";
    
    if ($conn->query($insert_sql) === TRUE) {
        echo "Tài khoản mới đã được tạo thành công!";
    } else {
        echo "Lỗi khi tạo tài khoản: " . $conn->error;
    }
}

// Đóng kết nối
$conn->close();
?>
