<?hh //strict

namespace Zynga\Framework\StorableObject\V1;

use Zynga\Framework\Testing\TestCase\V2\Base as TestCase;

class EmptyStorableTest extends TestCase {

  public function testValid(): void {
    $emptyStorable = new EmptyStorable();
    $this->assertEquals($emptyStorable->fields()->getForObject(), Map {});
  }
}
