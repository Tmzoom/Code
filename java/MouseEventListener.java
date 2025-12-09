
import javax.swing.*;
import java.awt.*;
import java.awt.event.*;

public class MouseEventListener extends JFrame implements MouseListener, MouseMotionListener {

    private JLabel label;

    public MouseEventListener() {
        super("Mouse Event Listener");
        setLayout(new FlowLayout());

        label = new JLabel("No event occurred");
        add(label);

        addMouseListener(this);
        addMouseMotionListener(this);

        setSize(300, 200);
        setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        setVisible(true);
    }

    // MouseListener methods
    @Override
    public void mouseClicked(MouseEvent e) {
        label.setText("Mouse clicked at (" + e.getX() + ", " + e.getY() + ")");
    }

    @Override
    public void mousePressed(MouseEvent e) {
        label.setText("Mouse pressed at (" + e.getX() + ", " + e.getY() + ")");
    }

    @Override
    public void mouseReleased(MouseEvent e) {
        label.setText("Mouse released at (" + e.getX() + ", " + e.getY() + ")");
    }

    @Override
    public void mouseEntered(MouseEvent e) {
        label.setText("Mouse entered");
    }

    @Override
    public void mouseExited(MouseEvent e) {
        label.setText("Mouse exited");
    }

    // MouseMotionListener methods
    @Override
    public void mouseDragged(MouseEvent e) {
        label.setText("Mouse dragged to (" + e.getX() + ", " + e.getY() + ")");
    }

    @Override
    public void mouseMoved(MouseEvent e) {
        label.setText("Mouse moved to (" + e.getX() + ", " + e.getY() + ")");
    }

    public static void main(String[] args) {
        SwingUtilities.invokeLater(MouseEventListener::new);
    }
}
