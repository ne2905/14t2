<Window x:Class="WpfApp_QuanLyBacSi.MainWindow"
        xmlns="http://schemas.microsoft.com/winfx/2000/xaml/presentation"
        xmlns:x="http://schemas.microsoft.com/winfx/2000/xaml"
        Title="Quản Lý Bác Sĩ" Height="480" Width="750" WindowStartupLocation="CenterScreen">
    
    <Window.Resources>
        <Style TargetType="Button">
            <Setter Property="Background" Value="#007ACC"/>
            <Setter Property="Foreground" Value="White"/>
            <Setter Property="FontWeight" Value="Bold"/>
            <Setter Property="Padding" Value="15,5"/>
            <Setter Property="Margin" Value="5"/>
        </Style>
        <Style TargetType="TextBox">
            <Setter Property="Margin" Value="5"/>
            <Setter Property="Padding" Value="3"/>
            <Setter Property="Height" Value="25"/>
        </Style>
    </Window.Resources>

    <Grid Margin="15">
        <Grid.RowDefinitions>
            <RowDefinition Height="Auto"/>
            <RowDefinition Height="Auto"/>
            <RowDefinition Height="*"/>
        </Grid.RowDefinitions>

        <GroupBox Header="Thông tin Bác sĩ" Grid.Row="0" Padding="10" Margin="0,0,0,10">
            <Grid>
                <Grid.ColumnDefinitions>
                    <ColumnDefinition Width="Auto"/>
                    <ColumnDefinition Width="*"/>
                    <ColumnDefinition Width="Auto"/>
                    <ColumnDefinition Width="*"/>
                </Grid.ColumnDefinitions>
                <Grid.RowDefinitions>
                    <RowDefinition Height="Auto"/>
                    <RowDefinition Height="Auto"/>
                    <RowDefinition Height="Auto"/>
                </Grid.RowDefinitions>

                <Label Content="Mã bác sĩ:" Grid.Row="0" Grid.Column="0" VerticalAlignment="Center"/>
                <TextBox x:Name="txtMa" Grid.Row="0" Grid.Column="1"/>

                <Label Content="Họ tên:" Grid.Row="0" Grid.Column="2" VerticalAlignment="Center"/>
                <TextBox x:Name="txtHoTen" Grid.Row="0" Grid.Column="3"/>

                <Label Content="Số ngày trực:" Grid.Row="1" Grid.Column="0" VerticalAlignment="Center"/>
                <TextBox x:Name="txtNgayTruc" Grid.Row="1" Grid.Column="1"/>

                <Label Content="Bậc lương:" Grid.Row="1" Grid.Column="2" VerticalAlignment="Center"/>
                <TextBox x:Name="txtBacLuong" Grid.Row="1" Grid.Column="3"/>

                <Label Content="Khoa khám:" Grid.Row="2" Grid.Column="0" VerticalAlignment="Center"/>
                <ComboBox x:Name="cboKhoa" Grid.Row="2" Grid.Column="1" Margin="5" Height="25" VerticalContentAlignment="Center">
                    <ComboBoxItem Content="Nội tổng hợp" IsSelected="True"/>
                    <ComboBoxItem Content="Ngoại chấn thương"/>
                    <ComboBoxItem Content="Nhi khoa"/>
                    <ComboBoxItem Content="Tim mạch"/>
                </ComboBox>
            </Grid>
        </GroupBox>

        <StackPanel Orientation="Horizontal" Grid.Row="1" HorizontalAlignment="Right" Margin="0,0,0,10">
            <Button x:Name="btnThem" Content="Thêm / Cập nhật" Click="btnThem_Click"/>
            <Button x:Name="btnLoc" Content="Báo cáo ngày trực &lt; 15" Click="btnLoc_Click" Background="#4CAF50"/>
        </StackPanel>

        <DataGrid x:Name="dgBacSi" Grid.Row="2" AutoGenerateColumns="False" IsReadOnly="True" SelectionMode="Single">
            <DataGrid.Columns>
                <DataGridTextColumn Header="Mã BS" Binding="{Binding MaBS}" Width="1*"/>
                <DataGridTextColumn Header="Họ và Tên" Binding="{Binding HoTen}" Width="2*"/>
                <DataGridTextColumn Header="Số Ngày Trực" Binding="{Binding SoNgayTruc}" Width="1.2*"/>
                <DataGridTextColumn Header="Bậc Lương" Binding="{Binding BacLuong}" Width="1*"/>
                <DataGridTextColumn Header="Khoa" Binding="{Binding Khoa}" Width="1.5*"/>
            </DataGrid.Columns>
        </DataGrid>
    </Grid>
</Window>
